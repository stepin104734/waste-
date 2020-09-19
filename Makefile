SRC = unity/unity.c\
src/waste.c\
test/test_waste.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = WASTE.out

# Output directory
BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

clean:
	rm -rf $(PROJECT_NAME)
$(BUILD):
	mkdir build
