/*
 * adaptee: adaptor-private
 */
typedef struct adaptee{
	void (*func)(void);
}adaptee_t;

adaptee_t *adaptee_create(void);
void adaptee_destruct(adaptee_t *adaptee);

