Proceso convetidor_de_medidas
	b=1
    by=8
    kb=1024
    mb=1024
    gb=1024
    tb=1024
	Escribir "ingrese los mb"
	Leer mbu
	b<-mbu*mb*kb*by
    escribir "en bit equivale a:" b
    by<-mbu*mb*kb
    escribir "en byte equivale a:" by
    gb<-mbu/gb
    escribir "en Gigabytes equivale a:" gb
    tb<-mbu*gb/tb
    escribir "en Terabyte equivale a:" tb
FinProceso

