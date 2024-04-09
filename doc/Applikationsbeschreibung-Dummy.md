## **Änderungshistorie**

09.04.2024 Applikation 1.0

* Initiales Release

## **Einleitung**

OpenKNX Dummy ist eine Applikation ohne Firmware und ohne jegliche Hardwareabhängigkeit. Ihr Zweck ist es, Geräte in der ETS abbilden zu können, die keine eigene ETS-Applikation besitzen, weil sie z.B. über ein Gateway Telegramme auf den KNX-Bus schicken. Der nutzen einer solchen Applikation (im Allgemeinen Dummy genannt) zeigt sich an verschiedenen Stellen:

* Man kann in der ETS, die das KNX-Projektverwaltungswerkzeug ist, direkt sehen, welche "echten" KNX-Geräte durch Gruppenadressen mit diesem virtuellen Gerät verbunden sind.
* Man kann im Gruppenmonitor das virtuelle Gerät direkt als benannte Quelle sehen, falls man die physikalische Adresse des virtuellen Gerätes genau so wählt wie die PA, die für dieses Gerät im Gateway genutzt wird.
* Wenn das virtuelle Gerät topologisch korrekt in der ETS einsortiert wird, können durch die ETS auch alle Filtertabellen in jeglichen Kopplern (Linienkoppler, Router) korrekt berechnet werden.

Die Applikation bietet bis zu 999 Kommunikationsobjekte, die man einzeln folgendermaßen konfigurieren kann:

* Name der Kommunikationsobjekts
* Länge des Kommunikationsobjekts. Dabei werden die üblichen Längen unterstützt:

  * 1 Bit
  * 2 Bit
  * 3 Bit
  * 4 Bit
  * 5 Bit
  * 6 Bit
  * 7 Bit
  * 1 Byte
  * 2 Byte
  * 3 Byte
  * 4 Byte
  * 6 Byte
  * 8 Byte
  * 10 Byte
  * 14 Byte

* Angabe, ob das Kommunikationsobjekt ein Eingang, Ausgang oder beides ist 
* Es ist möglich, die Flags auch einzeln zu setzen, um ein möglichst gutes Abbild des echten Gerätes in der ETS zu bekommen.
* Des weiteren ist es in der ETS möglich, jedem KO einen passenden DPT zuzuweisen, um die Semantik des Wertes zu dokumentieren.

Für diesen OpenKNX Dummy werden 2 Sichten zum Editieren der Objekte angeboten:

* Eine tabellarische Sicht mit allen Eigenschaften eines Kommunikationsobjekts pro Zeile und allen KO auf einer Seite. 
* Eine Detailsicht mit einem Kommunikationsobjekt pro Seite auf entsprechend vielen Seiten. Hier können die Multiselect-Eigenschaften der ETS besonders gut genutzt werden, um viele Objekte auf einmal ändern zu können.

Ferner kann der OpenKNX Dummy 

* sowohl auf einer TP-Linie
* wie auf einer IP-Linie

verwendet werden.

## **Dummy Application**

Auf dieser Seite erfolgen die grundsätzlichen Einstellungen für die Applikation. 

Unter Kanalauswahl können die verfügbaren Kommunikationsobjekte ausgewählt werden und unter Editieroptionen die möglichen Editoren der Applikation.

<!-- DOC -->
### **Anzahl der Kommunikationsobjekte**

Um die Applikation übersichtlicher zu gestalten, kann hier ausgewählt werden, wie viele Kommunikationsobjekte in der Applikation verfügbar und editierbar sind. Die Maximalanzahl der Kanäle hängt von der Applikationsvariante ab, die gerade verwendet wird und wird angezeigt.

Die ETS ist auch schneller in der Anzeige, wenn sie weniger (leere) Kommunikationsobjekte darstellen muss. Insofern macht es Sinn, nur so viele Kommunikationsobjekte anzuzeigen, wie man wirklich braucht.

<!-- DOC -->
### **Editiermodus**

Man kann die Kommunikationsobjekte in zwei unterschiedlichen Modi editieren. In diesem Auswahlfeld kann man den Editiermodus ausblenden, den Sie nicht benötigen, um damit die Applikation übersichtlicher zu gestalten.

#### **Übersicht und Detail**

Das ist der Standardwert und erlaubt es, die Kommunikationsobjekte in beiden Modi zu editieren.

#### **Nur Übersicht**

Wird dieser Modus gewählt, erscheint eine Seite mit allen Kommunikationsobjekten in einer Tabelle, mit allen Eigenschaften eines Kommunikationsobjekts pro Zeile.

Dieser Modus bietet eine gute Übersicht, erlaubt es aber nur jede Zelle der Tabelle einzeln zu ändern.

#### **Nur Details**

Wird dieser Modus gewählt, erscheint eine Seite für jedes zu editierende Kommunikationsobjekt mit allen seinen Eigenschaften auf der Seite.

Dieser Modus bietet unterstützt die ETS-Multiselect-Möglichkeiten, die es erlauben, viele gleichartige UI-Elemente zu selektieren und für alle diese Elemente mit einem Click eine Einstellung vorzunehmen.

Besonders für die Auswahl von Länge und vom Ein-/Ausgang ist dieser Modus wesentlich komfortabler.

<!-- DOC -->
## Übersicht

<!-- DOC Skip="1" -->
Diese Seiten erscheinen nur, wenn man bei [Editiermodus](#editiermodus) den Wert "Übersicht und Detail" oder "Nur Übersicht" gewählt hat.

Es erscheint eine Tabelle aller Kommunikationsobjekte und deren Eigenschaften, pro Zeile ein Kommunikationsobjekt.

Diese Darstellung ist übersichtlich, erlaubt aber nur Änderungen einzelner Tabellenzellen.


<!-- DOC -->
## **KO *n***

<!-- DOC Skip="1" -->
Diese Seiten erscheinen nur, wenn man bei [Editiermodus](#editiermodus) den Wert "Übersicht und Detail" oder "Nur Detail" gewählt hat.

Es erscheint für jedes Kommunikationsobjekt eine Seite mit allen Eigenschaften dieses Kommunikationsobjekts. 

Diese Darstellung unterstützt das ETS-Multiselect. Man kann mehrere gleichartige Objekte markieren und mit einem Click die Eigenschaften aller markierten Objekte ändern. 

Dies bietet sich besonders für die Eigenschaften Länge und Ein-/Ausgang an.

<!-- DOC -->
### **Name des KO**

Hier wird der Name für das Kommunikationsobjekt vergeben. Er ist frei wählbar und kann bis zu 40 Zeichen lang sein.

<!-- DOC -->
### **Ein-/Ausgang**

Hier wird festgelegt, ob das Kommunikationsobjekt einen Ein- oder einen Ausgang repräsentiert oder beides. Dabei wird das immer aus der Sicht des Gerätes betrachtet, das durch den Dummy repräsentiert wird. Eingang bedeutet also, dass das Gerät Telegramme vom KNX-Bus empfängt, Ausgang dass es Telegramme auf den KNX-Bus sendet.

<!-- DOC -->
### **Länge des KO**

Hier wird die Länge des Kommunikationsobjektes festgelegt (Wichtig: Nicht der DPT). Eine richtige Länge vorausgesetzt ist es dann in einem 2. Schritt möglich, dieses KO mit Gruppenadressen zu verknüpfen und einen passenden DPT zuzuweisen.

<!-- DOC HelpContext="OpenKNX" -->
## Das OpenKNX-Projekt

OpenKNX ist eine offene Gemeinschaft von Hobbyisten die freie und quelloffene Software für KNX-Geräte erstellen. Um eine nachhaltige und professionelle Integration ins Smarthome zu erreichen streben wir eine weitgehende Kompatibilität zum KNX-Standard an. Mit OpenKNX hast Du die Möglichkeit bereits fertige Lösungen einzusetzen, diese individuell anzupassen oder ganz neue Lösungen zu realisieren - der modulare Ansatz bietet schnelle Erfolge durch den Einsatz bewährter Softwaremodule.

Weitere Informationen findest Du unter: www.openknx.de - wiki.openknx.de - forum.openknx.de