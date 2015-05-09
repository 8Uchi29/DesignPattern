/*
 * interface: adaptor-public
 */
typedef struct interface {
	void (*func)(void *adaptor);
}intf_t;

intf_t *intf_create(void);
void intf_destruct(intf_t *intf);

/*
 * adaptor: adaptor-public
 */
typedef struct adaptor{
	void   *adaptee;
	intf_t *interface;
}adaptor_t;

adaptor_t *adaptor_create(void);
void adaptor_destruct(adaptor_t *adaptor);
