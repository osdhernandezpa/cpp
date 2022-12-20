# $< : significa la primera dependencia
# $^ : significa todas las dependencias
# $@ : target
# %  : significa comodin
# suma.x: suma.cpp
#	g++ $< -o $@
# se reduce al que esta en codigo (en este caso, % = suma)
# se debe especificar todavia lo que se quiere crear (suma.x) y las dependencias (suma.cpp)
# pero la regla se generaliza para el caso general


suma.x: suma.cpp

%.x: %.cpp
	g++ $< -o $@

datos.txt: suma.x
	./$< > $@

clean:
	rm -f a.out *.x *.txt






































