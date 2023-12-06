#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node* fast=head->next,*slow=head;
    while(fast!=slow){
        for(int i=0;i<2;++i){
            if(fast==NULL)return 0;
            fast=fast->next;
        }
        slow=slow->next;
    }
    return 1;
}