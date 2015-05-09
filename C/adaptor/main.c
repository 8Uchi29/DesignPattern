#include <stdio.h>
#include <stdlib.h>
#include "adaptor-public.h"

int main(void) {
	adaptor_t *adaptor = NULL;
	intf_t    *intf    = NULL;

	adaptor = adaptor_create(); //管理データ
	intf = adaptor->interface;
	(*(intf->func))((void *)adaptor);

	adaptor_destruct(adaptor);
	return 0;
}
