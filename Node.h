#ifndef EJERCICIOCLASE1011_NODE_H
#define EJERCICIOCLASE1011_NODE_H

template <class T>
class Node
{
private:
    T info;
    Node<T> *next;

public:
    Node(T info) : info(info)
    {
        next = NULL;
    };
    T getInfo() const
    {
        return info;
    }
    void setInfo(T info)
    {
        Node::info = info;
    }
    Node<T> *getNext() const
    {
        return next;
    }
    void setNext(Node<T> *next)
    {
        Node::next = next;
    }
    Node::~Node()
    {
    }

    Node::Node(/* args */)
    {
    }

#endif //EJERCICIOCLASE1011_NODE_H
