#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

/*Primer Metodo*/
int simple_init(void){
	printk(KERN_INFO "Loading Module \nHola MUndo!");
	return 0;
}

/*Segundo metodo*/
void simple_exit(void){
	printk(KERN_INFO "Removing Module \nHola Mundo!");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Lab 03 SO");
MODULE_AUTHOR("Marcos Gutierrez");