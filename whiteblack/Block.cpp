#include "Block.h"


Block::Block(){
    setup();
	type = BLOCK::BLACK_;
}

void Block::update(){
    switch (status)
    {
    case BLOCK::FALL_:
        break;
    case BLOCK::MOVE_:
        break;
    default:


        break;
    }
	
	if (env.isPushButton(Mouse::LEFT))
	{
		type = (type + 1) % 8;
	}
    
}

void Block::draw(){

	switch (type)
	{
	case BLOCK::NULLBLOCK:
		break;

	case BLOCK::NORMAL_:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::white);
		break;

	case BLOCK::WHITE:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::black);
		break;

	case BLOCK::BLACK_:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::blue);
		break;

	case BLOCK::MOVE_:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::cyan);
		break;

	case BLOCK::FALL_:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::gray);
		break;

	case BLOCK::DOUBLE_W:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::green);
		break;

	case BLOCK::DOUBLE_B:
		drawFillBox(start_pos.x(), start_pos.y(), draw_pos.x(), draw_pos.y(), Color::lime);
		break;
	}
	
		
	

}

void Block::setup(){
    block.size = Vec2f((float)BLOCKSIZE::WIDTH, 
        (float)BLOCKSIZE::HEIGTH);
    block.vec = Vec2f(0, 0);

}
///�u���b�N�̃|�W�V�����̃Z�b�g
void Block::setPos(Vec2f _pos){
    block.pos = _pos;
}
//�u���b�N�̃X�e�[�^�X�̃Z�b�g
void Block::setStatus(BLOCK _status){
    status = _status;
}

//�v���C���[�̏��
//��̃u���b�N�̏��
//���̃u���b�N�̏��
//�������Ƃ��̌���
//���}�X�������̂��H
Vec2f Block::Collision(Object _player, 
    BLOCK _up, BLOCK _down,
    DIRECTION _direction = DIRECTION::NON,
    int move_vector = 0){



    switch (status)
    {
    case BLOCK::FALL_:
        break;
    case BLOCK::MOVE_:
        break;
    default:
        break;
    }







    return Vec2f(0,0);
}

