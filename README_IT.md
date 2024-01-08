# Readme

[Readme: Italiano](./README_IT.md)

[Readme: English](./README.md)

# MouseJiggler per Arduino Leonardo

Questo programma è un MouseJiggler per Arduino Leonardo. Un MouseJiggler è un dispositivo che mantiene l'attività del mouse per impedire al computer di entrare in modalità di sospensione o standby. Questo programma fa muovere il mouse avanti e indietro su un percorso di 2 pixel ogni 6,2 secondi.

## Come caricare un file .ino su Arduino Leonardo

### Requisiti

- Arduino IDE installato sul tuo computer
- Una scheda Arduino Leonardo
- Un cavo USB per collegare la scheda al tuo computer

### Procedura

1. **Collegare la scheda Arduino al tuo computer**  
   Usa il cavo USB per collegare la scheda Arduino Leonardo al tuo computer.

2. **Aprire il file .ino con Arduino IDE**  
   Avvia Arduino IDE e vai su `File > Apri`. Naviga fino al file `mousejiggler.ino` che desideri caricare e fai clic su `Apri`.

3. **Selezionare la scheda e la porta**  
   Vai su `Strumenti > Scheda` e seleziona `Arduino Leonardo`. Successivamente, vai su `Strumenti > Porta` e seleziona la porta a cui è collegato il tuo Arduino Leonardo.

4. **Caricare il file mousejiggler.ino sulla scheda**  
   Fai clic su `Sketch > Carica` o usa la combinazione di tasti `Ctrl+U`. L'IDE compilerà il codice e lo caricherà sulla scheda Arduino Leonardo.

5. **Verificare il caricamento**  
   Puoi verificare se il caricamento è stato eseguito con successo controllando la console di output dell'IDE. Dovresti vedere un messaggio che dice `Caricamento completato`.

6. **Utilizzo**
   Ora, ogni volta che colleghi Arduino Leonardo al PC, il programma MouseJiggler verrà eseguito automaticamente. Ricorda che MouseJiggler è progettato per simulare il movimento del mouse e può essere utilizzato per evitare che il tuo PC vada in modalità standby o schermata di blocco per inattività.


