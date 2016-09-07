package bree.com.jniccalljava;

import android.app.Activity;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("JniTest");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        javaCallc();
    }
    public native void javaCallc();
    public  void cCallJava1(){
        Log.d("MainActivity", "我是java里面的cCallJava1方法我被C调用了");
    }
    public  String cCallJava2(String str){
        Log.d("MainActivity", "我是java里面的cCallJava2方法我被C调用了");
        return  null;
    }
}
