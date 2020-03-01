#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_driver_init(void){

	printk(KERN_ALERT "Driver is loaded. Hello driver!\n");

	return 0;

}

static void hello_driver_exit(void){

	printk(KERN_ALERT "Driver is unloaded. Goodbye Driver!\n");

}

module_init(hello_driver_init);
module_exit(hello_driver_exit);
