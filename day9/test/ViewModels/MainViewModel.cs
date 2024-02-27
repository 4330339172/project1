namespace test.ViewModels;
public class MainViewModel : ViewModelBase
{
    public string Greeting => "Welcome to Avalonia!";

    private bool channelConfigurationListIsOpen = false;

    private void ChannelConfigurationButtonPressed() => channelConfigurationListIsOpen ^= true;
}
