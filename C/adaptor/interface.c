#include <stdio.h>
#include <stdlib.h>
#include "adaptor-private.h"
#include "adaptor-public.h"

void intf_function(void *adaptor) {
	adaptor_t *ladapt  = (adaptor_t *)adaptor; 
	intf_t    *intf    = ladapt->interface;
	adaptee_t *adaptee = ladapt->adaptee;

	printf("It's my INTERFACE WORLD\n");
	adaptee->func();
	return;
}

/*
 *constract & destruct
 */
intf_t *intf_create(void) {
	intf_t *intf = NULL;
	intf = (intf_t *)malloc(sizeof(intf_t));
	intf->func = &(intf_function);
	return intf;
}

void intf_destruct(intf_t *intf) {
	free(intf);
	return;
}

///*Unit test*/
//int main(void) {
//	intf_t *intf = NULL;
//	intf = intf_create();
//	(*(intf->func))();
//	intf_destruct(intf);
//	return 0;
//}
