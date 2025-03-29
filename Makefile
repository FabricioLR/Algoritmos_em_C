C_SOURCE=$(wildcard *.c)
C_EXE = $(C_SOURCE:.c=.exe)

%.exe: %.c
	gcc -o $@ $<

media: media.exe
	./$<

circulo: area_circulo.exe
	./$<

triangulo: area_triangulo.exe
	./$<

troca: troca_variaveis.exe
	./$<

clean: $(C_EXE)
	$(RM) $^