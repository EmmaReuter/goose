#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Emma Reuter");
MODULE_DESCRIPTION("It honks");
MODULE_VERSION("0.0.1");

static int __init goose_init(void) {
	printk(KERN_INFO "Honk!\n");
	return 0;
}

static void __exit goose_exit(void) {
	printk(KERN_INFO "Honk!\n");
}

module_init(goose_init);
module_exit(goose_exit);
