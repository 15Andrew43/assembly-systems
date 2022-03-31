code = """
#ifndef INDEX_H
#define INDEX_H

int index() {
	return 1;
}
#endif
"""

file = open("index.h", "w")

file.write(code)

file.close()