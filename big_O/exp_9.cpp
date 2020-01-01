#include <stdio.h>
#include <iostream>

// calculate the big-o

#if 0
int sum(Node node){
    if(node == null){
        return 0;
    }
    return sum(node.left) + node.value + sum(node.right);
}
#endif

int main(){
    printf("BigO:O(N)\n");
    return 0;
}