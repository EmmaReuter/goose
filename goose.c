#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Emma Reuter");
MODULE_DESCRIPTION("It honks");
MODULE_VERSION("0.0.1");

static int __init goose_init(void) {
	int i;
	for(i = 0; i < 100; i++) {
		printk(KERN_INFO "Honk!\n");
	}
	// make the module unremovable
	try_module_get(THIS_MODULE);
	return 0;
}

static void __exit goose_exit(void) {
	printk(KERN_INFO "Honk!\n");
}

module_init(goose_init);
module_exit(goose_exit);
