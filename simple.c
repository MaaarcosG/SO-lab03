#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

/*Primer Metodo*/
int simple_init(){
	printk(KERN_INFO "Loading Module \nHola MUndo!");
	return 0:
}

void simple_exit(){
	printk(KERN_INFO "Removing Module \nHola MUndo!");
	return NULL;
}