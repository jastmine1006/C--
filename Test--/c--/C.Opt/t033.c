int f1();
int *f2();
static int a=1;
static int b=2;
static int *c;
static int **d;
typedef struct _X X;
struct _X {
int b;
int a;
};
static X *e;
static void f3(){
(c[1]=(b=((a*b)+d[(5+e->a)][((((c[4]+5)+c[6])+f1())+b)])));
}
