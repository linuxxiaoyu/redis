NewTypeObject *newtypeNew(void) {
    NewTypeObject *n = zmalloc(sizeof(*n));
    n->head = NULL;
    n->len = 0;
    return n;
}

void ntinsertCommand(client *c) {
    //基于客户端传递的参数，实现在NewTypeObject链表头插入元素
}
