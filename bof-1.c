#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
	printk(KERN_INFO "To the extreme I rock a mic like a vandal\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Light up a stage and wax a chump like a candle.\n");
}