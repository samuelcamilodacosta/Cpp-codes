#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* reverse(ListNode* A,int n){
    ListNode *tmp1=A,*tmp2=A,*prev=NULL,*curr,*tmp3=A;
    int half=n/2+1,cnt=1;
    while(tmp2!=NULL){
        if(cnt>=half){
            curr=tmp2;
            tmp2=tmp2->next;
            curr->next=prev;
            prev=curr;
        }
        else{
            tmp2=tmp2->next;
        }
        cnt++;
    }
    cnt=1;
    while(tmp3!=NULL){
        if(cnt==half-1){
            tmp3->next=prev;
            break;
        }
        cnt++;
        tmp3=tmp3->next;
    }
    return A;
 }
ListNode* Solution::subtract(ListNode* A) {
    //cout<<A->val;
    int n=0;
    ListNode *tmp1=A,*tmp2=A,*prev=NULL,*curr,*tmp3=A;
    while(tmp1!=NULL){
        n++;
        tmp1=tmp1->next;
    }
    A=reverse(A,n);
    int cnt=0,half=n/2,val=0;
    ListNode *f=A,*s=A;
    while(s!=NULL){
        if(val==half)
            break;
        if(cnt<half)
            s=s->next;
        else{
            int v1=f->val,v2=s->val;
            int res=v2-v1;
            f->val=res;
            f=f->next;
            s=s->next;
            val++;
        }
        cnt++;
    }
    reverse(A,n);
    return A;
}

int main(){

    return 0;
}
