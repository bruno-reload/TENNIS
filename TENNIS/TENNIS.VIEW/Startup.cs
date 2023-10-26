using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(TENNIS.VIEW.Startup))]
namespace TENNIS.VIEW
{
    public partial class Startup {
        public void Configuration(IAppBuilder app) {
            ConfigureAuth(app);
        }
    }
}
