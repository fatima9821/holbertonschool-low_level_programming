/**
* hash_djb2 - implémentation de l'algorithme djb2
* @str : chaîne utilisée pour générer la valeur de hachage
*
* Retour : valeur de hachage
*/
unsigned long int  hash_djb2 ( const  unsigned char  * str )
{
	hachage long int non signé ;
	int c;
	
	hachage = 5381;
	while ((c = *str++))
	{
		hachage = ((hachage << 5) + hachage) + c ; /* hachage * 33 + c */
	}
	return ( hachage );
}
