// 6��-11.NOTE.H
// Note class�� interface�μ� 
// ���� class�μ� friend class�� NoteImpl�� ����Ѵ�.
class Note{
    // NoteImpl * ni; //class keyword�� ���� error �߻�
    class NoteImpl* ni;
public:
    Note (int pitch, int duration);
    ~Note ();
    void Sound ();
    void Increase (int delta);
    void Modulate (int cicles);
} ;