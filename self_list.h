#ifndef SELF_LIST_H
#define SELF_LIST_H

#include "node.h"

template <typename T>
class SelfList {
    public: 
        enum Method {
            Move, Count, Transpose
        };

    protected:
        Node<T>* head;
        Method method;

    private:
    bool find(T data, Node<T> **&pointer) { // TO DO

        pointer = &head;

        while ( (*pointer != nullptr) ) {
            if ((*pointer)->data == data) {
                return true;
            }
            pointer = &((*pointer)->next);
        }

        return false;

    }

    public:
        explicit SelfList(Method method) : head(nullptr) { this->method = method; };

        bool insert(T data) { // INSERT PUSH BACK WITHOUT A TAIL

            auto newNode = new Node<T>{data};

            if ( !this->head ) {  // When there is no element

                this->head = newNode;
                this->head->next = nullptr;

                return true;

            }

            else if (this->head->next == nullptr) {  // When there is one element

                this->head->next = newNode;
                newNode->next = nullptr;

                return true;

            } else {  // When there is more than one element

                auto tempTail = this->head;

                while (tempTail->next != nullptr) {
                    tempTail = tempTail->next;
                }

                tempTail->next = newNode;
                newNode->next = nullptr;

                return true;

            }

        }
             
        bool remove(T data) { // TO DO

            Node<T> **temp;
            if ( !find(data, temp)) { return false; }

            else if ( this->head->next == nullptr ) { // When there is one element

                delete this->head;
                this->head = nullptr;

                return true;

            } else { // When there is more than one element

                auto current = this->head;
                auto previous = current;

                if ( current->data == data ) { // When delete head element

                    this->head = current->next;
                    delete current;

                    return true;

                } else {

                    while (current->data != data) {
                        previous = current;
                        current = current->next;
                    }

                    previous->next = current->next;
                    current->next = nullptr;
                    delete current;

                    return true;
                }
            }

        }

        // FIND self_list.h
        bool find(T data) { // TO DO


            switch (this->method) {

                case Move: {

                    Node<T> **curr;
                    auto after = this->head;
                    auto previous = after;
                    Node<T> *beginNode = nullptr;

                    if (find(data, curr)) {
//                        curr = &head;
                        if (this->head->data == data) { return true; }

                        after = after->next;
                        while (after->data != data) {
                            previous = after;
                            after = after->next;
//                            curr = &((*curr)->next);
                        }

                        previous->next = after->next;  // (*curr)->next = after->next;
                        after->next = this->head;
                        this->head = after;

                        return true;
                    }

                    break;

                }


                case Count: {

                    Node<T> **pointer;
                    auto current = this->head;
                    Node<T> *previous = current;

                    if ( find(data, pointer) ) {

                        if ( current->data == data ) { // When Count head element

                            ++current->counter;
                            return true;

                        }

                        while ( current->data != data ) {

                            previous = current;
                            current = current->next;

                        }

                        ++(current->counter);

                        auto auxCurrent = this->head;
                        Node<T> *auxPrevious = nullptr;

                        while ( auxCurrent->counter > current->counter ) {

                            auxPrevious = auxCurrent;
                            auxCurrent = auxCurrent->next;

                        }

                        if ( previous->counter > current->counter ) return true;

                        previous->next = current->next;
                        current->next = auxCurrent;

                        if ( auxPrevious != nullptr ) auxPrevious->next = current;
                        else this->head = current;

                        return true;

                    }

                    break;

                }


                case Transpose: {

                    Node<T> **temp;

                    if ( find(data, temp) ) {

                        auto current = this->head;
                        Node<T> *previous = current;
                        Node<T> *prevPrevious = previous;

                        if ( current->data == data ) { // When Transpose head element
                            return true;
                        }

                        while ( current->data != data ) {
                            prevPrevious = previous;
                            previous = current;
                            current = current->next;
                        }

                        previous->next = current->next;
                        prevPrevious->next = current;
                        current->next = previous;

                        return true;

                    }

                    break;

                }

            }

            return false;

        }

        T operator [] (int index) { // TO DO

            if ( index < 0 ) throw out_of_range("Index should be zero or positive!\n");
            if ( index > this->size() - 1 ) throw out_of_range("Index is bigger than the list!\n");

            auto curr = this->head;

            while (index--) {
                curr = curr->next;
            }

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
            if (!this->head) {
                cout << "List is empty!" << endl;
                return;
            }
            else {

                if (this->method == Count) {
                    for (auto p = this->head; p != nullptr; p = p->next) {
                        cout << p->data << "(" << p->counter << ") ";
                    }
                    std::cout << std::endl;
                } else {
                    for (auto p = this->head; p != nullptr; p = p->next) {
                        cout << p->data << " ";
                    }
                    std::cout << std::endl;
                }

                return;

            }
        }

        ~SelfList() { // TO DO

            if (!this->head) return;
            this->head->killSelf();

        }
};

#endif