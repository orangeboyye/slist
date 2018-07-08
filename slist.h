
struct snode {
	struct snode *next;
	int value;
};

int insert_snode(struct snode **head, int value);

int remove_snode(struct snode **head, int value);

void print_slist(struct snode *head);

void reverse_slist(struct snode **head);
void reverse_slist2(struct snode **head);






