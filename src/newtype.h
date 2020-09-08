struct NewTypeNode {
    long value;
    struct NewTypeNode *next;
};

struct NewTypeObject {
    struct NetTypeNode *head;
    size_t len;
} NewTypeObject;
