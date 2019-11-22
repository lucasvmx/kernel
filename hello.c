/*
 *
 * Estudo sobre módulos do linux kernel
 *
 * Autor: Lucas Vieira
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int on_start(void);
static void on_finish(void);

static int on_start()
{
	printk(KERN_INFO "Inicializando o modulo ...\n");
	return 0;
}

static void on_finish()
{
	printk(KERN_INFO "Finalizando o módulo ...\n");
}

module_init(on_start);
module_exit(on_finish);
