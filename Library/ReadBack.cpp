#include "ReadBack.h"

//�ض��������
void ReadBackBuffer(GLuint buffer, GLsizei size)
{
	float result[15];
	glGetNamedBufferSubData(buffer, 0, size, result);
}

//�ض���������
void ReadBackVertexAttrib(GLuint index)
{
	//�鿴indexָ���Ķ����Ƿ����
	float enable;
	glGetVertexAttribfv(index, GL_VERTEX_ATTRIB_ARRAY_ENABLED, &enable);
	//�鿴ÿ�������м�������
	float numComponent;
	glGetVertexAttribfv(index, GL_VERTEX_ATTRIB_ARRAY_SIZE, &numComponent);
	//�鿴���ڶ���ľ���
	float distance;
	glGetVertexAttribfv(index, GL_VERTEX_ATTRIB_ARRAY_STRIDE, &distance);
	//�鿴������������
	float type;
	glGetVertexAttribfv(index, GL_VERTEX_ATTRIB_ARRAY_TYPE, &type);
	//�鿴���������Ƿ񱻹�һ��
	float isNormalized;
	glGetVertexAttribfv(index, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED, &isNormalized);
	//�鿴��������
	float data[4];
	glGetVertexAttribfv(index, GL_CURRENT_VERTEX_ATTRIB, data);
}
