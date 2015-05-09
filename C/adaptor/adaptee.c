#include <stdio.h>
#include <stdlib.h>
#include "adaptor-private.h"

void adaptee_function(void) {
	printf("It's my adaptee WORLD\n");
	return;
}

adaptee_t *adaptee_create(void) {
	adaptee_t *adaptee = NULL;
	adaptee = (adaptee_t *)malloc(sizeof(adaptee_t));

	adaptee->func = &(adaptee_function);

	return adaptee;
}

void adaptee_destruct(adaptee_t *adaptee) {
	free(adaptee);
	return;
}

////Unit-Test
//int main(void) {
//	adaptee_t *adaptee = NULL;
//	adaptee = adaptee_create();
//	(*(adaptee->func))();
//	adaptee_destruct(adaptee);
//	return 0;
//}
