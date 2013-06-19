go:
	go build && ./go_callback

clang:
	cc callback.c && ./a.out

clean:
	rm go_callback a.out
