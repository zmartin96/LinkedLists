#pragma once

class ListNode
{
public:
	ListNode() : next(nullptr) {}
	ListNode(ListNode* p = nullptr)
	{
		this->next = nullptr;
		this->prev = p;
	}
	ListNode(ListNode*n,ListNode* p, double& v) :ListNode(p)
	{
		if(n!=nullptr) n->next = this;
		this->value = v;
	}
	double value;
	ListNode* next;
	ListNode* prev;
};