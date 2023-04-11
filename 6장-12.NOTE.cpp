// 6��-12.NOTE.CPP file
#include <iostream>
#include "6��-11.NOTE.h"
using namespace std;

class NoteImpl {
	friend Note;
private:
	int pitch;// ���� ������
	int duration;
	NoteImpl(int p, int d) :
		pitch(p), duration(d)
	{ }
	// note�� ����
	void Sound() {
		// �Լ� body�� ���ĵ� Note::Sound()�� �������� �ʾƵ� �ȴ�
		cout << "Sound(): pitch = " << pitch << ", duration = " << duration << endl;
	}
	void Modulate(int cycles);
};
// Note class�� member �Լ���:
 // ��ȯ ������
Note::Note(int pitch, int duration) {
	ni = new NoteImpl(pitch, duration);
}
Note :: ~Note() {
	delete ni;
}
void Note::Sound() {//NoteImpl:: Sound()�� ����Ͽ� ���ۼ��� code
	ni->Sound();
}
void Note::Increase(int delta) {
	// �ٸ� class�� private �����Ϳ� ���� ���� ����
	ni->pitch += delta;
}
void NoteImpl::Modulate(int cycles) {
	for (int i = 1; i <= cycles; i++) {
		pitch++;
		duration = 1 + i % 2;
		Sound();
	}
}
//*
// Modulate member �Լ��� NoteImpl class�� �߰������ν� ���ۼ��� �� �ִ�.
void Note::Modulate(int cycles) {
	cout << "Modulate():: started" << endl;
	for (int i = 1; i <= cycles; i++) {
		ni->pitch++;
		ni->duration = 1 + i % 2;
		cout << "ni->pitch = " << ni->pitch << ", ni->duration = " << ni->duration << endl;
	}
}
//*/