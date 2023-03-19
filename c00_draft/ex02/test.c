#include <unistd.h>

void tf_prim(){
    int c;
    c = 110;
    write(1, &c, 1);
}

int main(void){

	tf_prim();
	return 0;
}
