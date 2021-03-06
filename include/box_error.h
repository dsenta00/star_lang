#ifndef BOX_ERROR_H
#define BOX_ERROR_H

typedef enum {
  BOX_STATUS_OK,

  ERROR_BOX_INSTRUCTION_OBJECT_DOES_NOT_EXIST,
  ERROR_BOX_INSTRUCTION_UNKNOWN,
  ERROR_BOX_INSTRUCTION_INVALID_NO_OF_ARGS,
  ERROR_BOX_INSTRUCTION_UNKNOWN_CONSTANT_FORMAT,
  ERROR_BOX_INSTRUCTION_NO_MATCH_CONSTANT_FORMAT_WITH_DATA_TYPE,

  ERROR_BOX_METHOD_ADD_OBJECTS_OF_SAME_NAME,

  ERROR_BOX_RELATIONSHIP_ADDING_MORE_THAN_ONE,

  ERROR_BOX_ENTITY_UNKNOWN_RELATIONSHIP,

  ERROR_BOX_DATA_INVALID_DATA_TYPE,
  ERROR_BOX_DATA_NULL_DATA,
  ERROR_BOX_DATA_ASSIGNING_STRING,
  ERROR_BOX_DATA_ADDING_STRING,
  ERROR_BOX_DATA_SUBTRACTING_STRING,
  ERROR_BOX_DATA_LOGICAL_OPERATION_STRING,
  ERROR_BOX_DATA_LOGICAL_OPERATION_FLOAT,
  ERROR_BOX_DATA_MULTIPLYING_STRING,
  ERROR_BOX_DATA_INCREMENTING_STRING,
  ERROR_BOX_DATA_DECREMENTING_STRING,
  ERROR_BOX_DATA_DIVIDING_STRING,
  ERROR_BOX_DATA_DIVIDING_ZERO,
  ERROR_BOX_DATA_INVALID_MODULUS,
  ERROR_BOX_DATA_MODULUS_ZERO,

  ERROR_BOX_ARRAY_ADDING_NULL_DATA,

  ERROR_BOX_VIRTUAL_MEMORY_UNKNOWN_CHUNK,
  ERROR_BOX_VIRTUAL_MEMORY_ZERO_CAPACITY,
  ERROR_BOX_VIRTUAL_MEMORY_UNKNOWN_FAULT
} box_status;

class box_error {
public:
  box_error(box_status status, const char *func);
  bool operator == (box_error &another_error);
  void print();
  box_status get_status();
  const char *get_status_str();
protected:
  box_status status;
  const char *func;
};

#endif // BOX_ERROR_H
