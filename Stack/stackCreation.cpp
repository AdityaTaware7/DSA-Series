#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *A;
};

void Create(struct Stack *st)
{
    cout<<"enter the size for array"<<endl;
    cin>>st->size;
    st->top = -1;
    st->A = new int(st->size);
}

void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"Stack overflow";
    }
    else
    {
        st->top++;
        st->A[st->top]=x;
    }
}

void Display(struct Stack st)
{
    int i;
    for (i = 0; i < st.size; i++)
    {
        cout<<st.A[i]<<endl;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if(st->top==-1)
    {
        cout<<"Stack Underflow\n";
    }
    else{
        x = st->A[st->top--];
    }
    return x;
}

int main(){
    struct Stack st;
    Create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,25);
    push(&st,35);
    push(&st,50);
    cout<<pop(&st)<<endl;
    Display(st);
    return 0;
}