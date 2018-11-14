LinkList Reverse_1(LinkList L) {
	//L是带头节点的单链表,本算法将L就地逆置
	LNode *p, *r;//p为工作指针
	p = L->next;//从第一个元素结点开始
	L->next = NULL;//先将头节点L的next域置为NULL
	while (p != NULL) {//依次将元素结点摘下
		r = p->next;
		p->next = L->next;
		L->next = p;
		p = r;
	}
	return L;
}

LinkList Reverse_2(LinkList L) {
	//依次遍历线性表L，并将结点指针反转
	LNode *pre, *p = L->next, *r = p->next;
	p->next = NULL;//处理第一个结点
	while (r != NULL) {//r为空,则说明p为最后一个结点
		pre = p;//依次继续遍历
		p = r;
		r = r->next;
		p->next = pre;//指针反转
	}
	L->next = p;//处理最后一个结点
	return L;
}