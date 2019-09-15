#ifndef TRAITS_LIST_H
#define TRAITS_LIST_H

#include "node.h"

template <typename Tr>
class TraitsList {     
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;

    private:
        Node<T>* head;
        Operation cmp;

        bool find(T data, Node<T> **&pointer) { // TO DO

            pointer = &head;

            while ( (*pointer != nullptr) && (!cmp(data, (*pointer)->data)) ) {
                pointer = &((*pointer)->next);
            }

            return *pointer != nullptr && (*pointer)->data == data;

        }
              
    public:
        TraitsList() : head(nullptr) {};


        bool insert(T data) { // TO DO

            auto newNode= new Node<T>{data};
            Node<T> **temp = &this->head;

            if( find(data, temp) ) { return false; }

            newNode->next = *temp;
            *temp = newNode;

            return true;

        }


        bool remove(T data) { // TO DO

            Node<T> **temp;

            if( !find(data, temp) ) { return false; }

            Node<T> *deleteNode = *temp;

            *temp = (*temp)->next;
            delete deleteNode;

            return true;

        }


        bool find(T data) { // TO DO

            Node<T> **temp;
            return find(data, temp);

        }


        T operator [] (int index) { // TO DO

            if ( index < 0 ) throw out_of_range("Index should be zero or positive!\n");
            if ( index > this->size() - 1 ) throw out_of_range("Index is bigger than the list!\n");

            auto curr = this->head;

            while (index--)
                curr = curr->next;

            return curr->data;

        }
             
        int size() { // TO DO

            int count = 0;

            for (auto pNode = this->head; pNode != nullptr; pNode = pNode->next) {
                ++count;
            }

            return count;

        }


        void print() { // TO DO

            for (int i = 0; i < this->size(); ++i) {
                cout << (*this)[i] << " ";
            } std::cout << std::endl;

        }


        ~TraitsList() { // TO DO

            if (!this->head) return;
            this->head->killSelf();

        }         
};

#endif