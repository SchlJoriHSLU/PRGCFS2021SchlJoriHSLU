 #include <stdio.h>  			// include: Anweisung an Compiler zur Erzeugung einer Header-Datei (.h) 
 					// mit stdio: Standart-input-output (stdio ist eine Bibliothek von C)
 					// --> Mit dieser Sprache wird hier geschrieben

int main ()				// int: Variable 16 Bit (-32768 bis 32767
					// main: Einstiegspunkt für jedes C-Programm --> Funktion mit 					// Rückgabewert. Dieser Wert entspricht einer int-Variable.
{					// {: Jede geöffnete Klammer muss geschlossen werden und was innerhalb davon 					// steht, ist ausserhalb der Klammern nicht sichtbar
	printf("Hello World\n"); 	// printf: steht für print formatted. 
					// ("   "): was hier steht wird geprinted.
					// \n: fügt neue Zeile am Ende ein

	return 0;			// "int" erwartet einen return "0"
}

