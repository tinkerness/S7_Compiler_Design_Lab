#include<stdio.h>
#include<string.h>

char result[20][20],copy[3],states[20][20];

void add_state(char a[3],int i) {
    // add state to ith row of result
    strcpy(result[i],a);
}

void display(int n) {
    int k=0;
    printf("\nEpsilon closure of %s = { ",copy);
    while(k < n){
        // kth row of result
        printf(" %s",result[k]);
        k++;
    }
    printf(" } \n");
}

int main() {
    FILE *INPUT;
    INPUT=fopen("input.dat","r");

    // char state[3];
    int end,n,i=0,k=0;
    // current,initial,inp_symbol,final
    char state[3],state1[3],input[3],state2[3];

    printf("\nEnter the no of states: ");
    scanf("%d",&n);
    printf("\nEnter the states: ");
    for(k=0;k<3;k++) {
        scanf("%s",states[k]);
    }

    // process each state
    for(k=0;k<n;k++) {
        i=0;
        strcpy(state,states[k]);
        strcpy(copy,state);
        // add state to result
        add_state(state,i++);

        // Read state transitions from the file using fscanf.
        while(1) {
            end = fscanf(INPUT,"%s%s%s",state1,input,state2);
            if (end == EOF ) {
                break;
            }
            
            if( strcmp(state,state1) == 0 ) {
                if( strcmp(input,"e") == 0 ) {
                    add_state(state2,i++);
                    strcpy(state, state2);
                }
            }
        }
        display(i);
        rewind(INPUT);
    }
    
    return 0;
}