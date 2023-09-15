#include <stdio.h>
struct node
{
    int value;
    struct node *next;
};

int main(){
    int many, position, insert;
    scanf("%d", &many);
    struct node list[many], head;
    head.next = &list[0];
    for(int i = 0; i < many; i++){
        scanf("%d", &list[i].value);
        if (i != many){
            list[i].next = &list[i+1];
        }else{
            list[i].next = 0;
        }
    }
    scanf("%d\n%d", &position, &insert);
    list[many].value = insert;
    if(position == 0){
        head.next = &list[many];
        list[many].next = &list[0];
    }else{
        list[many].next = &list[position];
        list[position-1].next = &list[many];
    }
    struct node pos = *head.next;
    for(int i = 0; i <= many; i++){
        printf("%d ", pos.value);
        pos = *pos.next;
    }
}