/**
* hash_djb2 - implémentation de l'algorithme djb2
* @str : chaîne utilisée pour générer la valeur de hachage
*
* Retour : valeur de hachage
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
	
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c ; /* hachage * 33 + c */
	}
	return (hash);
}
