void *__ItoA(int i);
typedef struct _TCB TCB;
struct _TCB {
int pc;
int sp;
};
static TCB _cmm_0T={0,20480};
static TCB _cmm_1T={0,32768};
static TCB *_cmm_2T[]={&_cmm_0T,&_cmm_1T};
static TCB **tcbs=_cmm_2T;
static void task1(){
;
}
static void task2(){
;
}
static char boole;
int main(){
int *vect;
(vect=__ItoA(65024));
(tcbs[0]->pc=((int)&task1));
(tcbs[1]->sp=(((int)&task2)+100));
int b;
(b=(((int)&boole)+10));
return 0;
}
