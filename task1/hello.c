#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE ( "GPL" );
MODULE_AUTHOR ( "Mike Harris" );
MODULE_DESCRIPTION ( "a simple hello world Eudyptula task 1" );
MODULE_VERSION ( "1.0" );

static int __init helloworld_init ( void )
{
        printk ( "hello world.\n" );
        return 0;
}

static void __exit helloworld_exit ( void )
{
        printk ( "goodbye.\n" );
}

module_init ( helloworld_init );
module_exit ( helloworld_exit );
