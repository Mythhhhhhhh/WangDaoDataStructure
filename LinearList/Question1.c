void Del_X_3(Linklist &L, ElemType x) {
	//递归实现在单链表L中删除值为x的节点
	LNode *p;//p指向待删除的节点
	if (L == NULL)//递归出口
		return;
	if (L->data == x) {//若L所指结点的值为x
		p = L;         //删除*L,并让L指向下一结点  
		L = L->next;
		free(p);
		Del_X_3(L, x);//递归调用
	}
	else//若L所指结点的值不为x
		Del_X_3(L->next, x);//递归调用2
}   