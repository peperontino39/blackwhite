#include "../Top/Top.h"
///���g
//�����͂����ʂ�̃A�N�V�����̏�����`����
///�v���C���[�̎d�l���悭���Ă���Ă�
///�v���C���[�̑傫���̓u���b�N�̈��菬����
//(140,190)���炢�ł����Ǝv��
//player�͑I�����Ă���}�X�ڂ�������Vec2i��
//�v���C���[�̈ʒu��������i�O�C�O�j�݂�����
//�v���C���[�݂̂���������i1,0�j�݂�����
//�M���[�݂�����
//�������get����
//��I��͈͂��v���C���[����2�}�X��܂ł���
//�z�����o��������true��Ԃ��Q�b�^�[
//
//�L�[�͈ړ���ZC�I����WASD�W�����v��K�z����J
//���o��L�S�ς���I�łƂ肠�����͗���
//�v���C���[�̏����ʒu�̓}�b�v���������Ă���\�肾
//



class Player
{
public:
    Player();
    void update();
    void draw();
    void setup(Vec2f pos);
	void move();
	//�u���b�N���z�����ԂȂ�I���{�^����������
	//�����ċz�������ǂ�����Ԃ�
	bool absColor(bool active);
	bool releaseColor(bool active);

	//�Q�b�^�[
	Vec2f getPos();
	Vec2i getSelec();
	CONDITION getCond();

	//�Z�b�^�[
	//�|�X�̃Z�b�g�͒n�ʔ���ł���Ă����Ă�
	void setPos(Vec2f pos);
private:
    
    Object player;
	Vec2i selection;
	Vec2f speed;
	float g;
	int color_abs;
	int change_count;
	CONDITION condition;
	DIRECTION direction;
};
