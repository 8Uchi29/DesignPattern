#include <stdio.h>
#include <stdlib.h>
#include "adaptor-private.h"
#include "adaptor-public.h"

// adaptor自体は、結合させるという役割だけなので、
// func自体は持つべきではない。
//void adaptor_function() {
//	printf("It's my adaptor WORLD\n");
//	return;
//}

adaptor_t *adaptor_create(void){
	adaptor_t *adaptor = NULL;
	adaptor = (adaptor_t *)malloc(sizeof(adaptor_t));

	//expands & implements
	adaptor->adaptee   = (void *)adaptee_create();
	adaptor->interface = intf_create(); 

	return adaptor;
}

void adaptor_destruct(adaptor_t *adaptor) {
	// destruct sub-Object
	adaptee_destruct(adaptor->adaptee);
	intf_destruct(adaptor->interface);

	free(adaptor);
	return;
}

////Unit-Test
//int main(void) {
//	adaptor_t *adaptor = NULL;
//	adaptor = adaptor_create();
//	(*(adaptor->func))((void *)adaptor);
//	adaptor_destruct(adaptor);
//	return 0;
//}
