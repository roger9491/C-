
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next = NULL;
};


class link_list{
    public:
        struct node *head = NULL;

        
        void add_head(int temp){
            //建立好新的節點
            struct node *new_node = new struct node;
            new_node->data = temp;
            //建立節點在頭的部位

            if (head == NULL)
            {
                head = new_node;
            }else{
                new_node->next = head;
                head = new_node;
            }
        }
        // 遍歷
        void hist(){
           
            while(head != NULL){
                cout << head->data << "\n";
                head = head->next;
            }
        }
};

int main(){

    link_list list1;
    for(int i = 1; i <= 10; i++){
        list1.add_head(i);
    }
    list1.hist();
    
    return 0;
}



// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     struct node *next = NULL;
// };
// class link_list{
//     private:
//         struct node *head = NULL;

//     public:
//         /*
//         寫一個class- function 新增節點在頭
//         */
//        void add_head_node(int temp){
//             struct node * new_node = new struct node;
//             new_node->data = temp; 
//             if(head != NULL){
//                 new_node->next = head;
//                 head = new_node;

//             }else{
//                 new_node->data = temp;   
//                 head = new_node;

//             }
//        }
//         /*
//             遍歷節點
//         */
//        void traverse_list(){
//            struct node *temp = head;
//             int a;
//             cout << "traverse\n";
//             // cout << temp << "\n";
//             // cout << head << "\n";
//            while (temp != NULL)
//            {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//                 // cin >> a;
//            } 
//            cout << endl;
//         }

//         /* 
//             插在第i個節點
//         */
//         void insert_i_node(int data,int index){
//             struct node * new_node = new struct node;
//             new_node->data = data;

//             if (head == NULL){
//                 new_node->next = head;
//                 head = new_node;
//             }else
//             {
//                 int c = 1;
//                 struct node *temp = head;
//                 while (temp->next != NULL)
//                 {
//                     if (c + 1 == index)
//                     {
//                         break;
//                     }
//                     temp = temp->next;
//                     c += 1;
//                 }
                
//                 new_node->next = temp->next;
//                 temp->next = new_node;
//             }
//         }

//         /*
//             刪除特定節點
//         */
//         void deleteNode(int target){
//             struct node *cur = head;
//             struct node *pre;
            

//             if (cur->data == target){
//                 head = head->next;
//             }else
//             {
//                 int flag = 0;
//                 while (cur != NULL)
//                 {
//                     if (cur->data == target){
//                         flag = 1;
//                         break;
//                     }
//                     pre = cur;
//                     cur = cur -> next;
//                 }
//                 if (flag)
//                 {
//                     pre->next = cur->next;
//                 }else{
//                     cout << "找不到\n";
//                 }
            
//             }
            
//         }


// };


// int main(){

//     link_list link_list1;
    
//     for (int i = 0; i < 5; i++)
//     {
//         link_list1.add_head_node(i+1);
//     }
    
//     link_list1.traverse_list();

//     link_list1.insert_i_node(99,2);

//     link_list1.traverse_list();

//     link_list1.deleteNode(99);
//     link_list1.traverse_list();
//     return 0;
// }