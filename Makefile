build:
	gcc hex2rgb.c -o bin/hex2rgb -O3
	gcc rgb2hex.c -o bin/rgb2hex -O3
	gcc tlen.c -o bin/tlen -O3
	gcc pw.c -o bin/pw -O3

clean:
	rm bin/*
